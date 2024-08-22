// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXFIRSTVIEWPORTCOMPONENTINSERTIONCONDITION_H
#define SXFIRSTVIEWPORTCOMPONENTINSERTIONCONDITION_H

@class NSString;
@protocol SXComponentInsertionCondition;

#import <Foundation/Foundation.h>


@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition>



@property (nonatomic) BOOL allowFirstViewportException; // ivar: _allowFirstViewportException
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateMarker:(id)arg0 componentTraits:(NSUInteger)arg1 layoutProvider:(id)arg2 ;
-(id)init;
-(id)initWithAllowFirstViewportException:(BOOL)arg0 ;


@end


#endif