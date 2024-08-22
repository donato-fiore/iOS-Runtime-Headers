// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMDOCUMENTINFOCOLLECTION_H
#define ICDOCCAMDOCUMENTINFOCOLLECTION_H

@class NSDate, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface ICDocCamDocumentInfoCollection : NSObject

@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSInteger docCamPDFVersion;
@property (retain, nonatomic) NSMutableArray *docInfos; // ivar: _docInfos
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)init;
-(void)bumpModificationDate;


@end


#endif