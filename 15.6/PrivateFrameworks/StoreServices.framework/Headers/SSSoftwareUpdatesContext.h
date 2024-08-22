// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSOFTWAREUPDATESCONTEXT_H
#define SSSOFTWAREUPDATESCONTEXT_H

@class NSString, NSArray;
@protocol SSXPCCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSString *clientIdentifierHeader; // ivar: _clientIdentifierHeader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForced) BOOL forced; // ivar: _forced
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *softwareTypes; // ivar: _softwareTypes
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif