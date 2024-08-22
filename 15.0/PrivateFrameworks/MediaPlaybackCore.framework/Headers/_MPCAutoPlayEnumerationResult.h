// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCAUTOPLAYENUMERATIONRESULT_H
#define _MPCAUTOPLAYENUMERATIONRESULT_H

@class NSString;
@protocol MPSectionedIdentifierListEnumerationItem;

#import <Foundation/Foundation.h>


@interface _MPCAutoPlayEnumerationResult : NSObject <MPSectionedIdentifierListEnumerationItem>

 {
    NSString *_sectionIdentifier;
}


@property (readonly, nonatomic) NSInteger branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entryType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic, getter=isRemoved) BOOL removed;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly) Class superclass;


-(id)initWithSectionIdentifier:(id)arg0 ;
-(id)itemResult;
-(id)trackingEntryResult;


@end


#endif