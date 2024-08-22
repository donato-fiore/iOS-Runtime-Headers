// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFLOCALSEARCHRESULT_H
#define SFLOCALSEARCHRESULT_H

@class SFSearchResult, NSURL, SFText;



@interface SFLocalSearchResult : SFSearchResult {
    NSURL *_url;
    SFText *_title;
}




-(id)initWithCompletionMatch:(id)arg0 ;
-(id)title;
-(id)url;
-(void)setTitle:(id)arg0 ;
-(void)setUrl:(id)arg0 ;


@end


#endif