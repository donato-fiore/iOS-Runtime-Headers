// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIAPLAYLISTCREATIONMETADATA_H
#define MPMEDIAPLAYLISTCREATIONMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPMediaPlaylistCreationMetadata : NSObject {
    NSString *_defaultAuthorDisplayName;
}


@property (copy, nonatomic) NSString *authorDisplayName; // ivar: _authorDisplayName
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif