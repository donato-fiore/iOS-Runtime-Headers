// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPCHANGESESSION_H
#define TSWPCHANGESESSION_H

@class TSPObject, TSKAnnotationAuthor, NSDate;



@interface TSWPChangeSession : TSPObject {
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}


@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned int sessionUID;


+(BOOL)needsObjectUUID;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSession:(id)arg0 ;
-(NSUInteger)hash;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif