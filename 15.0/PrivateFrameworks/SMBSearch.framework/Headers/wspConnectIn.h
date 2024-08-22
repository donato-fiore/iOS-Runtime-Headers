// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WSPCONNECTIN_H
#define WSPCONNECTIN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "wspPropertySet.h"

@interface wspConnectIn : NSObject {
    ? msghdr;
}


@property unsigned int cExtPropSet; // ivar: _cExtPropSet
@property unsigned int cPropSets; // ivar: _cPropSets
@property unsigned int cbBlob2; // ivar: _cbBlob2
@property unsigned int clientIsRemote; // ivar: _clientIsRemote
@property (retain) NSString *clientMachineName; // ivar: _clientMachineName
@property unsigned int clientVersion; // ivar: _clientVersion
@property (retain) wspPropertySet *coreFrameworkSet; // ivar: _coreFrameworkSet
@property (retain) wspPropertySet *coreFrameworkSet2; // ivar: _coreFrameworkSet2
@property (retain) wspPropertySet *fsciFrameworkSet1; // ivar: _fsciFrameworkSet1
@property (retain) wspPropertySet *fsciFrameworkSet2; // ivar: _fsciFrameworkSet2
@property (retain) wspPropertySet *msidxsRowSetSet; // ivar: _msidxsRowSetSet
@property (retain) wspPropertySet *queryExtSet; // ivar: _queryExtSet
@property (retain) NSString *serverMachineName; // ivar: _serverMachineName
@property (retain) NSString *userName; // ivar: _userName


-(id)initWithCtx:(id)arg0 EnableRowSetEvents:(BOOL)arg1 NoExpensiveProps:(BOOL)arg2 UseExtendedBTypes:(BOOL)arg3 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif