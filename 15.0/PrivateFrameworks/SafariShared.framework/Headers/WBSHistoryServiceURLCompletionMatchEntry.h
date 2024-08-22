// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYSERVICEURLCOMPLETIONMATCHENTRY_H
#define WBSHISTORYSERVICEURLCOMPLETIONMATCHENTRY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject <NSSecureCoding>

 {
    unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> _streamData;
    NSString *_url;
    NSString *_title;
}


@property (readonly, nonatomic) *_HistoryStreamedMatchEntry streamData;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) float topSitesScore;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSInteger visitCountScore;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreamData:(*void)arg0 ;
-(id)initWithURLString:(id)arg0 title:(id)arg1 topSitesScore:(float)arg2 visitCountScore:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif