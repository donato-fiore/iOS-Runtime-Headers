// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDHEADERSFOOTERS_H
#define PDHEADERSFOOTERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PDHeadersFooters : NSObject {
    BOOL mHasDateTime;
    BOOL mHasNowDateTime;
    BOOL mHasUserDateTime;
    BOOL mHasSlideNumber;
    BOOL mHasHeader;
    BOOL mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}




-(BOOL)hasDateTime;
-(BOOL)hasFooter;
-(BOOL)hasHeader;
-(BOOL)hasNowDateTime;
-(BOOL)hasSlideNumber;
-(BOOL)hasUserDateTime;
-(id)footer;
-(id)header;
-(id)userDateTime;
-(void)setFooter:(id)arg0 ;
-(void)setHasDateTime:(BOOL)arg0 ;
-(void)setHasFooter:(BOOL)arg0 ;
-(void)setHasHeader:(BOOL)arg0 ;
-(void)setHasNowDateTime:(BOOL)arg0 ;
-(void)setHasSlideNumber:(BOOL)arg0 ;
-(void)setHasUserDateTime:(BOOL)arg0 ;
-(void)setHeader:(id)arg0 ;
-(void)setUserDateTime:(id)arg0 ;


@end


#endif