// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENLINKEDNOTEBOOKREF_H
#define ENLINKEDNOTEBOOKREF_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface ENLinkedNotebookRef : NSObject <NSCoding>



@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (retain, nonatomic) NSString *shardId; // ivar: _shardId
@property (retain, nonatomic) NSString *sharedNotebookGlobalId; // ivar: _sharedNotebookGlobalId


+(id)linkedNotebookRefFromLinkedNotebook:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif