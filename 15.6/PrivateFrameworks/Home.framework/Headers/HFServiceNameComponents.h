// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSERVICENAMECOMPONENTS_H
#define HFSERVICENAMECOMPONENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HFServiceNameComponents : NSObject

@property (readonly, nonatomic) NSString *composedString;
@property (retain, nonatomic) NSString *rawServiceName; // ivar: _rawServiceName
@property (retain, nonatomic) NSString *roomName; // ivar: _roomName
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithRawServiceName:(id)arg0 rawRoomName:(id)arg1 ;


@end


#endif