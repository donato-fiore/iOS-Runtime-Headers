// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUIPEOPLESUGGESTIONIMAGEFETCHOPERATION_H
#define SFUIPEOPLESUGGESTIONIMAGEFETCHOPERATION_H

@class NSOperation, NSString, UIImage;
@protocol SFPeopleSuggestion;



@interface SFUIPeopleSuggestionImageFetchOperation : NSOperation {
    id<SFPeopleSuggestion> *_peopleSuggestion;
    CGSize _targetSize;
    NSInteger _layoutDirection;
}


@property (readonly, nonatomic) NSString *identifier;
@property (retain) UIImage *image; // ivar: _image


-(id)initWithPeopleSuggestion:(id)arg0 targetSize:(struct CGSize )arg1 layoutDirection:(NSInteger)arg2 ;
-(void)main;


@end


#endif