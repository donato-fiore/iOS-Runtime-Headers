// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSHAREDRECORDMERGER_H
#define CPLSHAREDRECORDMERGER_H

@class NSString;
@protocol CPLSharedRecordMerger, CPLSharedRecordPropertyMapping;

#import <Foundation/Foundation.h>


@interface CPLSharedRecordMerger : NSObject <CPLSharedRecordMerger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CPLSharedRecordPropertyMapping> *mapping; // ivar: _mapping
@property (readonly) Class superclass;


-(id)initWithMapping:(id)arg0 ;
-(void)mergeRecord:(id)arg0 isSharedRecord:(BOOL)arg1 inPrivateRecord:(id)arg2 ;


@end


#endif