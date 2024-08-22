// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHSAFARIBOOKMARKSRESULTOBJECT_H
#define DMFFETCHSAFARIBOOKMARKSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *bookmarks; // ivar: _bookmarks


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBookmarks:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_appendDescriptionOfBookmark:(id)arg0 toString:(id)arg1 level:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif