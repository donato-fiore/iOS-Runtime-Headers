// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSEARCHABLEITEM_H
#define PSSEARCHABLEITEM_H

@class NSString, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface PSSearchableItem : NSObject

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *classIdentifier; // ivar: _classIdentifier
@property (retain, nonatomic) NSString *contentDescription; // ivar: _contentDescription
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *keywords; // ivar: _keywords
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *rankingHint; // ivar: _rankingHint
@property (retain, nonatomic) NSArray *requiredCapabilities; // ivar: _requiredCapabilities
@property (retain, nonatomic) NSArray *requiredCapabilitiesOr; // ivar: _requiredCapabilitiesOr
@property (retain, nonatomic) NSString *url; // ivar: _url


-(id)toCSSearchableItem;
-(id)toManifestDictionary;


@end


#endif