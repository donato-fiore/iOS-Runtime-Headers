// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFONSCREENCONTENTNODE_H
#define WFONSCREENCONTENTNODE_H

@class NSURL, NSString, NSNumber, NSArray, WFContentItem, INFile, FPSandboxingURLWrapper;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFOnScreenContentNode : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic) CGRect applicationFrame; // ivar: _applicationFrame
@property (readonly, nonatomic) NSNumber *applicationLevel; // ivar: _applicationLevel
@property (retain, nonatomic) NSString *chatRegistryContinuityKey; // ivar: _chatRegistryContinuityKey
@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (readonly, nonatomic) INFile *file; // ivar: _file
@property (readonly, nonatomic) NSString *photoAssetIdentifier; // ivar: _photoAssetIdentifier
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) FPSandboxingURLWrapper *wrapper; // ivar: _wrapper


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 file:(id)arg1 applicationBundleIdentifier:(id)arg2 applicationFrame:(struct CGRect )arg3 applicationLevel:(id)arg4 source:(id)arg5 ;
-(id)initWithContentItem:(id)arg0 file:(id)arg1 applicationBundleIdentifier:(id)arg2 source:(id)arg3 ;
-(id)initWithURLWrapper:(id)arg0 applicationBundleIdentifier:(id)arg1 source:(id)arg2 ;
-(void)addChild:(id)arg0 ;
-(void)addChildren:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateObjectsFromContentItem:(id)arg0 ;
-(void)removeChild:(id)arg0 ;


@end


#endif