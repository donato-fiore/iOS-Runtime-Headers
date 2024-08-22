// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTRANSLATIONMAP_H
#define FCTRANSLATIONMAP_H

@class NSString, NSDictionary;
@protocol FCTranslationProvider;

#import <Foundation/Foundation.h>


@interface FCTranslationMap : NSObject <FCTranslationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *favoriteTranslationMap; // ivar: _favoriteTranslationMap
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *resourceID; // ivar: _resourceID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *topicTranslationMap; // ivar: _topicTranslationMap


-(id)favoriteTranslationForTagID:(id)arg0 ;
-(id)initWithPBTranslationMap:(id)arg0 resourceID:(id)arg1 ;
-(id)topicTranslationForTagID:(id)arg0 ;


@end


#endif