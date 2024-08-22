// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VITEXTBLOCKANNOTATION_H
#define VITEXTBLOCKANNOTATION_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VITextBlockAnnotation : NSObject <NSCopying>



@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) NSArray *textAnnotations; // ivar: _textAnnotations


+(id)empty;
+(id)textBlockWithAnnotations:(id)arg0 ;
+(id)textBlockWithDocumentObservations:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTextAnnotations:(id)arg0 ;


@end


#endif