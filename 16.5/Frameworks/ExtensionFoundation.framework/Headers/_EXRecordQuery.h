// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXRECORDQUERY_H
#define _EXRECORDQUERY_H

@class EXQuery, NSPredicate, LSExtensionPointRecord;



@interface _EXRecordQuery : EXQuery {
    NSPredicate *_predicate;
    ? _hostAuditToken;
}


@property (retain) LSExtensionPointRecord *record; // ivar: _record


+(BOOL)supportsSecureCoding;
-(BOOL)matchesRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)extensionPointIdentifier;
-(id)extensionPointRecords;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionPoint:(id)arg0 ;
-(id)predicate;
-(struct ? )hostAuditToken;
-(unsigned int)platform;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setHostAuditToken:(struct ? )arg0 ;
-(void)setPredicate:(id)arg0 ;


@end


#endif