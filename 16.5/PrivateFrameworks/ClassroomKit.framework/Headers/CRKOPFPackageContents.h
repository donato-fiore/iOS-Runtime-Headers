// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKOPFPACKAGECONTENTS_H
#define CRKOPFPACKAGECONTENTS_H

@class NSString, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRKOPFPackageContents : NSObject

@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSString *bookIdentifier; // ivar: _bookIdentifier
@property (copy, nonatomic) NSString *bookIdentifierType; // ivar: _bookIdentifierType
@property (copy, nonatomic) NSString *coverImagePath; // ivar: _coverImagePath
@property (readonly, nonatomic) NSMutableDictionary *itemPathsByIdentifier; // ivar: _itemPathsByIdentifier
@property (readonly, nonatomic) NSMutableArray *spineItemIdentifiers; // ivar: _spineItemIdentifiers
@property (copy, nonatomic) NSString *tableOfContentsFilePath; // ivar: _tableOfContentsFilePath
@property (copy, nonatomic) NSString *tableOfContentsMediaType; // ivar: _tableOfContentsMediaType
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)cfiWithItemIdentifier:(id)arg0 fragment:(id)arg1 ;
-(id)initWithIdentifierType:(id)arg0 identifier:(id)arg1 ;
-(id)itemIdentifierForHref:(id)arg0 fragment:(*id)arg1 ;
-(id)urlWithItemIdentifier:(id)arg0 fragment:(id)arg1 ;


@end


#endif