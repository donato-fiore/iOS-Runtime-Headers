// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHSAFARIBOOKMARKSRESULTOBJECT_H
#define CRKFETCHSAFARIBOOKMARKSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *bookmarks; // ivar: _bookmarks


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif