// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INEXTENSIONCONTEXTSLOTRESOLUTIONRESULT_H
#define INEXTENSIONCONTEXTSLOTRESOLUTIONRESULT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSInteger result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(NSInteger)arg0 data:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif