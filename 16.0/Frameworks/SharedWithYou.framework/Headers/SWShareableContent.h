// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSHAREABLECONTENT_H
#define SWSHAREABLECONTENT_H

@class NSItemProvider, LPLinkMetadata, NSArray, NSString;
@protocol NSSecureCoding, SWShareableContentRepresentationProvider;

#import <Foundation/Foundation.h>


@interface SWShareableContent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasPossibleCollaborationRepresentation;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSArray *registeredTypeIdentifiers; // ivar: _registeredTypeIdentifiers
@property (retain, nonatomic) NSObject<SWShareableContentRepresentationProvider> *representationProvider; // ivar: _representationProvider
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly, copy, nonatomic) NSString *sourceSceneIdentifier; // ivar: _sourceSceneIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)canLoadObjectOfClass:(Class)arg0 ;
-(BOOL)hasRepresentationConformingToTypeIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceSceneIdentifier:(id)arg0 sourceBundleIdentifier:(id)arg1 metadata:(id)arg2 registeredTypeIdentifiers:(id)arg3 ;
-(id)sourceApplicationIdentifier;
-(id)sourceIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadDataRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif