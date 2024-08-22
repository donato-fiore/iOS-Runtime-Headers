// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCHANGESESSION_H
#define TSWPCHANGESESSION_H

@class NSDate;


#import "TSPObject.h"
#import "TSKAnnotationAuthor.h"

@interface TSWPChangeSession : TSPObject {
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}


@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned int sessionUID;


-(BOOL)isEqualToSession:(id)arg0 ;
-(void)dealloc;


@end


#endif