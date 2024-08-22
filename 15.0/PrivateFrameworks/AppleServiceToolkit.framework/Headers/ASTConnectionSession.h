// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTCONNECTIONSESSION_H
#define ASTCONNECTIONSESSION_H



#import "ASTMaterializedConnection.h"

@interface ASTConnectionSession : ASTMaterializedConnection



-(id)initWithIdentities:(id)arg0 ticket:(id)arg1 ;
-(void)_addTokenToHeaderField;


@end


#endif