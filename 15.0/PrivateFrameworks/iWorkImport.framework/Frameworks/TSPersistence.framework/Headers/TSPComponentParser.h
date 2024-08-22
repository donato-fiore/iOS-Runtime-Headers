// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCOMPONENTPARSER_H
#define TSPCOMPONENTPARSER_H

@protocol TSPComponentParserDelegate;

#import <Foundation/Foundation.h>


@interface TSPComponentParser : NSObject {
    id<TSPComponentParserDelegate> *_delegate;
    NSUInteger _state;
    unsigned int _archiveInfoLength;
    ArchiveInfo _archiveInfo;
    unsigned int _messagesLength;
}




-(BOOL)readFromStream:(struct DispatchDataInputStream *)arg0 error:(*id)arg1 ;
-(NSUInteger)readArchiveFromStream:(struct DispatchDataInputStream *)arg0 error:(*id)arg1 ;
-(NSUInteger)readArchiveInfoFromStream:(struct DispatchDataInputStream *)arg0 error:(*id)arg1 ;
-(NSUInteger)readArchiveInfoLengthFromStream:(struct DispatchDataInputStream *)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)readWithChannel:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif