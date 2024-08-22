// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDMBOOK_H
#define MDMBOOK_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MDMBook.h"

@interface MDMBook : NSObject <NSCopying>



@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (retain, nonatomic) NSNumber *downloadIdentifier; // ivar: _downloadIdentifier
@property (copy, nonatomic) NSString *fullPath; // ivar: _fullPath
@property (retain, nonatomic) NSNumber *iTunesStoreID; // ivar: _iTunesStoreID
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (retain, nonatomic) MDMBook *previousVersion; // ivar: _previousVersion
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *version; // ivar: _version


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)friendlyName;
-(id)init;
-(id)initWithManifestDictionary:(id)arg0 ;
-(id)manifestDictionary;
-(void)updateBookAttributesByCopyingFromBook:(id)arg0 ;


@end


#endif