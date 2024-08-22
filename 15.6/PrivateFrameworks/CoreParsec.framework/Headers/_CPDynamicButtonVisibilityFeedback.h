// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPDYNAMICBUTTONVISIBILITYFEEDBACK_H
#define _CPDYNAMICBUTTONVISIBILITYFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPProcessableFeedback, _CPDynamicButtonVisibilityFeedback, NSSecureCoding;



@interface _CPDynamicButtonVisibilityFeedback : PBCodable <_CPProcessableFeedback, _CPDynamicButtonVisibilityFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (copy, nonatomic) NSString *cardSectionIdentifier; // ivar: _cardSectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (copy, nonatomic) NSArray *visibleDynamicButton2s; // ivar: _visibleDynamicButton2s


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(id)visibleDynamicButton2sAtIndex:(NSUInteger)arg0 ;
-(void)addVisibleDynamicButton2s:(id)arg0 ;
-(void)clearVisibleDynamicButton2s;
-(void)writeTo:(id)arg0 ;


@end


#endif