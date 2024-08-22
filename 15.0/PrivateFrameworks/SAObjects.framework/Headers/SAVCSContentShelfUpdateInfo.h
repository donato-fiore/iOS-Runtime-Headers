// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAVCSCONTENTSHELFUPDATEINFO_H
#define SAVCSCONTENTSHELFUPDATEINFO_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pageNumber;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetShelfViewId;
@property (copy, nonatomic) NSString *targetViewId;
@property (copy, nonatomic) NSURL *url;


+(id)contentShelfUpdateInfo;
+(id)contentShelfUpdateInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif