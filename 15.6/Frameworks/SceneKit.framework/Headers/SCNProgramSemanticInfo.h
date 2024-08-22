// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNPROGRAMSEMANTICINFO_H
#define SCNPROGRAMSEMANTICINFO_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) NSString *semantic; // ivar: _semantic


+(BOOL)supportsSecureCoding;
+(id)infoWithSemantic:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif