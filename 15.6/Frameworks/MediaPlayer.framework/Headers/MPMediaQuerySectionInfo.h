// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAQUERYSECTIONINFO_H
#define MPMEDIAQUERYSECTIONINFO_H

@class NSArray;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSArray *_sectionIndexTitles;
}


@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) BOOL hasUnknownSection; // ivar: _hasUnknownSection
@property (copy, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections


+(BOOL)supportsSecureCoding;
-(NSUInteger)indexOfSectionForSectionIndexTitleAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif