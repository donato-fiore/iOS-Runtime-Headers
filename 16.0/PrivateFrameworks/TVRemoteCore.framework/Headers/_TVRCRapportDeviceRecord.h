// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVRCRAPPORTDEVICERECORD_H
#define _TVRCRAPPORTDEVICERECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TVRCRapportDeviceRecord : NSObject

@property (readonly, nonatomic) BOOL hasAvailableTransports;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger transports; // ivar: _transports


-(NSUInteger)_transportForStatusFlag:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithDevice:(id)arg0 ;
-(void)addTransportForStatusFlag:(NSUInteger)arg0 ;
-(void)removeTransportForStatusFlag:(NSUInteger)arg0 ;
-(void)updateTransportsForStatusFlags:(NSUInteger)arg0 ;


@end


#endif