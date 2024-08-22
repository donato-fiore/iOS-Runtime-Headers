// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAVCSCONTENTDETAILPAGE_H
#define SAVCSCONTENTDETAILPAGE_H

@class NSString, NSURL;


#import "SAAceView.h"
#import "SAUIImageResource.h"

@interface SAVCSContentDetailPage : SAAceView

@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *imagesJsonContentPayload;
@property (nonatomic) BOOL isEvod;
@property (copy, nonatomic) NSString *loadingText;
@property (nonatomic) NSInteger resultIndex;
@property (copy, nonatomic) NSString *seasonId;
@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL userDriven;
@property (copy, nonatomic) NSString *utsId;
@property (copy, nonatomic) NSURL *utsSearchUrl;


+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif