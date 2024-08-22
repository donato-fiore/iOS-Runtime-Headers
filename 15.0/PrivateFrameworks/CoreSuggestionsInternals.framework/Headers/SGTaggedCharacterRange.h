// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGTAGGEDCHARACTERRANGE_H
#define SGTAGGEDCHARACTERRANGE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGTaggedCharacterRange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger annotationType; // ivar: _annotationType
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(NSUInteger)annotationTypeFromString:(id)arg0 ;
+(id)annotationTypeUniqueIdentifier:(NSUInteger)arg0 ;
+(id)biosBasedAnnotation:(id)arg0 usingTags:(id)arg1 forSection:(id)arg2 ;
+(id)describeAnnotationType:(NSUInteger)arg0 ;
+(id)enrichAndFilterTaggedCharacterRanges:(id)arg0 usingMapping:(id)arg1 withAnnotationType:(NSUInteger)arg2 ;
+(id)flattenTaggedCharacterRanges:(id)arg0 usingWhitelist:(id)arg1 replaceOOVWithToken:(id)arg2 ;
+(id)mergeTaggedCharacterRanges:(id)arg0 usingBaseTaggedCharacterRanges:(id)arg1 extraTags:(id)arg2 tagOverrides:(id)arg3 alignWithGroundTruth:(id)arg4 ;
+(id)mergeTagsFromTaggedCharacterRanges:(id)arg0 withTaggedCharacterRanges:(id)arg1 ;
+(id)state:(id)arg0 index:(int)arg1 section:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTaggedCharacterRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictRepresentation;
-(id)init;
-(id)initWithAnnotationType:(NSUInteger)arg0 tags:(id)arg1 range:(struct _NSRange )arg2 text:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif