// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISICONDECORATION_H
#define ISICONDECORATION_H

@class NSString, NSUUID, NSURL;
@protocol ISIconDecorationInternal, ISIconDecoration, NSCopying, ISScalableCompositorResource;

#import <Foundation/Foundation.h>


@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying>



@property (readonly) NSObject<ISScalableCompositorResource> *compositorResource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSUInteger identifierKind; // ivar: _identifierKind
@property NSInteger mode; // ivar: _mode
@property NSInteger position; // ivar: _position
@property (readonly) NSUUID *resourceToken; // ivar: _resourceToken
@property (readonly) NSURL *resourceURL; // ivar: _resourceURL
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageForDescriptor:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)initWithResourceURL:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)resourceFingerprint;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareImagesForDescriptors:(id)arg0 ;


@end


#endif