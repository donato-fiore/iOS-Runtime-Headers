// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLURESPONSE_H
#define CDMNLURESPONSE_H

@class SIRINLUEXTERNALCDMNluResponse;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDMNluResponse : NSObject <NSSecureCoding>

 {
    ? swiftProto;
}


@property (nonatomic, retain) SIRINLUEXTERNALCDMNluResponse *objcProto; // ivar: objcProto


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjcProto:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif