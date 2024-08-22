// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDONTOLOGYMANIFESTITEM_H
#define _HDONTOLOGYMANIFESTITEM_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface _HDOntologyManifestItem : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *checksum; // ivar: _checksum
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSString *region; // ivar: _region
@property (readonly, copy, nonatomic) NSString *schemaType; // ivar: _schemaType
@property (readonly, nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSInteger size; // ivar: _size
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(id)manifestItemFromLine:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif