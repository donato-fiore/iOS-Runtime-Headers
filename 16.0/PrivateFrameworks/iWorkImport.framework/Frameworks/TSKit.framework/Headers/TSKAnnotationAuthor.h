// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKANNOTATIONAUTHOR_H
#define TSKANNOTATIONAUTHOR_H

@class TSPObject, NSString, NSArray;
@protocol TSKAuthor, TSPCopying;


#import "TSKAuthorColors.h"

@interface TSKAnnotationAuthor : TSPObject <TSKAuthor, TSPCopying>

 {
    TSKAuthorColors *_colors;
}


@property (retain, nonatomic) TSKAuthorColors *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *flattenedPublicID; // ivar: _flattenedPublicID
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPublicAuthor; // ivar: _isPublicAuthor
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *publicIDs; // ivar: _publicIDs
@property (readonly, nonatomic) BOOL showAuthorComments;
@property (readonly) Class superclass;


+(id)authorNameExplanatoryStringWithUseExplanation:(BOOL)arg0 withSettingsExplanation:(BOOL)arg1 ;
+(id)defaultAuthorName;
+(id)normalizedAuthorNameForAuthorName:(id)arg0 ;
+(void)enumerateAnnotationsInDocument:(id)arg0 withAuthor:(id)arg1 usingHitBlock:(id)arg2 ;
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPreferredOver:(id)arg0 ;
-(id)componentRootObject;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 privateID:(id)arg3 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 privateIDs:(id)arg3 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 color:(id)arg2 publicIDs:(id)arg3 isPublicAuthor:(BOOL)arg4 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif