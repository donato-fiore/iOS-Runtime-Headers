// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STLISTDATADIFF_H
#define STLISTDATADIFF_H

@class NSString;
@protocol STStatusDomainDataDiff, NSCopying;

#import <Foundation/Foundation.h>

#import "STListData.h"

@interface STListDataDiff : NSObject <STStatusDomainDataDiff, NSCopying>

 {
    STListData *_objectsAdded;
    STListData *_objectsRemoved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromListData:(id)arg0 toListData:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)listDataByApplyingToListData:(id)arg0 ;
-(void)applyToMutableListData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif