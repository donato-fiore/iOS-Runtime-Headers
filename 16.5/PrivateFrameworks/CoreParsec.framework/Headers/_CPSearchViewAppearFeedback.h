// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPSEARCHVIEWAPPEARFEEDBACK_H
#define _CPSEARCHVIEWAPPEARFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding;



@interface _CPSearchViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOnLockScreen; // ivar: _isOnLockScreen
@property (nonatomic) BOOL isOverApp; // ivar: _isOverApp
@property (nonatomic) BOOL isUsingLoweredSearchBar; // ivar: _isUsingLoweredSearchBar
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *originatingApp; // ivar: _originatingApp
@property (copy, nonatomic) NSString *preexistingInput; // ivar: _preexistingInput
@property (nonatomic) BOOL readerTextAvailable; // ivar: _readerTextAvailable
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) int viewAppearEvent; // ivar: _viewAppearEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif