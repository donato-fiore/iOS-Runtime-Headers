// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSHAREDSIMPLEPROPERTYMAPPING_H
#define CPLSHAREDSIMPLEPROPERTYMAPPING_H

@class NSString;
@protocol CPLSharedRecordPropertyMapping;

#import <Foundation/Foundation.h>


@interface CPLSharedSimplePropertyMapping : NSObject <CPLSharedRecordPropertyMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldUpdatePropertyOnPrivateRecord:(id)arg0 recordClass:(Class)arg1 ;
-(BOOL)shouldUpdatePropertyOnSharedRecord:(id)arg0 recordClass:(Class)arg1 ;


@end


#endif