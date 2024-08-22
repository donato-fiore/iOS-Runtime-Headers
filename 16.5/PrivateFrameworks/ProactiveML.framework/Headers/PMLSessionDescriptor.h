// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLSESSIONDESCRIPTOR_H
#define PMLSESSIONDESCRIPTOR_H

@class _PASLazyResult, NSString;
@protocol NSCopying, PMLPlistAndChunksSerializableProtocol;

#import <Foundation/Foundation.h>


@interface PMLSessionDescriptor : NSObject <NSCopying, PMLPlistAndChunksSerializableProtocol>

 {
    _PASLazyResult *_featureVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(float)_parseFeatureVersion:(id)arg0 descriptor:(id)arg1 ;
+(id)descriptorForName:(id)arg0 version:(id)arg1 locale:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubSessionDescriptor;
-(NSUInteger)subSessionLabel;
-(float)featureVersion;
-(id)baseSessionDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 version:(id)arg1 locale:(id)arg2 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)subSessionDescriptorForLabel:(NSUInteger)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif