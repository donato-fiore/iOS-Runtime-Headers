// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSHARETARGET_H
#define CRKSHARETARGET_H

@class DMFControlGroupIdentifier, NSDictionary, NSString, NSData, CATTaskClient;

#import <Foundation/Foundation.h>


@interface CRKShareTarget : NSObject

@property (nonatomic, getter=isCourse) BOOL course; // ivar: _course
@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic, getter=isGroup) BOOL group; // ivar: _group
@property (retain, nonatomic) NSData *iconImageData; // ivar: _iconImageData
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isInstructor) BOOL instructor; // ivar: _instructor
@property (copy, nonatomic) NSString *secondaryName; // ivar: _secondaryName
@property (nonatomic) BOOL supportsFileURLs; // ivar: _supportsFileURLs
@property (retain, nonatomic) CATTaskClient *taskClient; // ivar: _taskClient
@property (copy, nonatomic) NSString *type; // ivar: _type


+(id)sandboxExtensionForPath:(id)arg0 ;
+(id)sandboxExtensionsForFileURLs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToShareTarget:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)operationToSendItems:(id)arg0 fromBundleIdentifier:(id)arg1 description:(id)arg2 previewImageData:(id)arg3 ;


@end


#endif