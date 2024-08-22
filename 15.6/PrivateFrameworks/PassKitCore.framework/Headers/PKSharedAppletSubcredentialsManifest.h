// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREDAPPLETSUBCREDENTIALSMANIFEST_H
#define PKSHAREDAPPLETSUBCREDENTIALSMANIFEST_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKSharedAppletSubcredentialsManifest : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *items; // ivar: _items
@property (readonly, nonatomic) NSDictionary *sanitizedItems;
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif