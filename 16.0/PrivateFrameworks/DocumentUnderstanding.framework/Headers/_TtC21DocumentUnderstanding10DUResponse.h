// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21DOCUMENTUNDERSTANDING10DURESPONSE_H
#define _TTC21DOCUMENTUNDERSTANDING10DURESPONSE_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding25DULanguageTaggingResponse.h"
#import "_TtC21DocumentUnderstanding31DUProductClassificationResponse.h"
#import "_TtC21DocumentUnderstanding11DUDebugInfo.h"
#import "_TtC21DocumentUnderstanding26DUStructuredEntityResponse.h"
#import "_TtC21DocumentUnderstanding24DUTopicDetectionResponse.h"
#import "_TtC21DocumentUnderstanding36DUUserInterfaceUnderstandingResponse.h"

@interface _TtC21DocumentUnderstanding10DUResponse : NSObject <NSCoding, NSCopying>



@property (nonatomic, retain) _TtC21DocumentUnderstanding25DULanguageTaggingResponse *languageTags; // ivar: languageTags
@property (nonatomic, retain) _TtC21DocumentUnderstanding31DUProductClassificationResponse *productCategories; // ivar: productCategories
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo; // ivar: responseDebugInfo
@property (nonatomic, retain) _TtC21DocumentUnderstanding26DUStructuredEntityResponse *structuredEntities; // ivar: structuredEntities
@property (nonatomic, retain) _TtC21DocumentUnderstanding24DUTopicDetectionResponse *topics; // ivar: topics
@property (nonatomic, retain) _TtC21DocumentUnderstanding36DUUserInterfaceUnderstandingResponse *userInterfaceUnderstandingResults; // ivar: userInterfaceUnderstandingResults


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif