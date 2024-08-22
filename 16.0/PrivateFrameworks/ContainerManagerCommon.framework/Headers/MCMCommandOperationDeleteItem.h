// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDOPERATIONDELETEITEM_H
#define MCMCOMMANDOPERATIONDELETEITEM_H

@class NSURL;
@protocol MCMMetadata;

#import <Foundation/Foundation.h>


@interface MCMCommandOperationDeleteItem : NSObject

@property (retain, nonatomic) NSURL *manifestURL; // ivar: _manifestURL
@property (readonly, nonatomic) NSObject<MCMMetadata> *metadata; // ivar: _metadata
@property (readonly, nonatomic) BOOL removeCodesignInfo; // ivar: _removeCodesignInfo


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMetadata:(id)arg0 removeCodesignInfo:(BOOL)arg1 manifestURL:(id)arg2 ;


@end


#endif