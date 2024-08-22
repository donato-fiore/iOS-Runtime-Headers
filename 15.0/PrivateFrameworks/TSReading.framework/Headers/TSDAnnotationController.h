// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDANNOTATIONCONTROLLER_H
#define TSDANNOTATIONCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSDAnnotationController : NSObject

@property (readonly, nonatomic) NSString *annotationNavigationString;
@property (readonly, nonatomic) BOOL hasAnnotations;
@property (nonatomic) BOOL textSelectionChangeShouldDismissAnnotations;


-(id)annotationNavigationTypeStringUsedForNavigating:(BOOL)arg0 ;
-(void)commitCommentText:(id)arg0 forAnnotation:(id)arg1 ;
-(void)didShowAnnotation:(id)arg0 ;
-(void)nextAnnotation:(id)arg0 ;
-(void)previousAnnotation:(id)arg0 ;
-(void)registerDelegate:(id)arg0 ;
-(void)unregisterDelegate:(id)arg0 ;
-(void)willShowAnnotation:(id)arg0 ;


@end


#endif