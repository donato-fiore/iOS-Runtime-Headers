// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSFAMILYCIRCLE_H
#define SSFAMILYCIRCLE_H

@class NSString, NSArray;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSFamilyCircle : NSObject <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *iTunesAccountNames; // ivar: _iTunesAccountNames
@property (readonly) Class superclass;


-(id)allITunesAccountNames;
-(id)allITunesIdentifiers;
-(id)copyXPCEncoding;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)newCacheRepresentation;


@end


#endif