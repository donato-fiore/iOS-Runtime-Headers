// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONSHAREOPTIONS_H
#define SWCOLLABORATIONSHAREOPTIONS_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SWCollaborationShareOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *optionsGroups; // ivar: _optionsGroups
@property (copy, nonatomic) NSString *summary; // ivar: _summary


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)shareOptionsWithOptionsGroups:(id)arg0 ;
+(id)shareOptionsWithOptionsGroups:(id)arg0 summary:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToShareOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptionsGroups:(id)arg0 ;
-(id)initWithOptionsGroups:(id)arg0 summary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif