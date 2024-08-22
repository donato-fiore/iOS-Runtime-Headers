// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLCONSTANTRELOCATION_H
#define MTLCONSTANTRELOCATION_H

@class NSString;
@protocol MTLRelocation, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface MTLConstantRelocation : NSObject <MTLRelocation>



@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName


-(id)initWithSymbolName:(id)arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 ;
-(id)initWithSymbolName:(id)arg0 data:(id)arg1 ;


@end


#endif