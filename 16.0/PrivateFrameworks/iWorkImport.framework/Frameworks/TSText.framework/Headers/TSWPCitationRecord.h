// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCITATIONRECORD_H
#define TSWPCITATIONRECORD_H

@class TSPObject, NSString;



@interface TSWPCitationRecord : TSPObject {
    NSString *_endNoteXML;
    BOOL _hideAuthorNames;
    BOOL _hideYear;
    NSString *_pageRange;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_authorsString;
    NSString *_title;
    NSString *_year;
    NSString *_type;
}


@property (copy, nonatomic) NSString *authorsString;
@property (readonly, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *endNoteXML;
@property (nonatomic) BOOL hideAuthorNames;
@property (nonatomic) BOOL hideYear;
@property (copy, nonatomic) NSString *pageRange;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) BOOL recordXMLApplied; // ivar: _recordXMLApplied
@property (nonatomic) BOOL shouldRemove; // ivar: _shouldRemove
@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *year;


-(BOOL)isRecordEqual:(id)arg0 ;
-(id)authorYearString;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_copyPropertiesToObject:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif