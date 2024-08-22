// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSONALIZATIONONTOLOGYLEVELCONFIG_H
#define FCPERSONALIZATIONONTOLOGYLEVELCONFIG_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationOntologyLevelConfig : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *tagWeightMapping; // ivar: _tagWeightMapping


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 defaultConfig:(id)arg1 ;
-(id)initWithTagWeightMapping:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif