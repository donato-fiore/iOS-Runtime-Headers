// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9AACCLIENT18AECNOOPPOLICYSTORE_H
#define _TTC9AACCLIENT18AECNOOPPOLICYSTORE_H

@class SwiftObject;
@protocol AEPolicyStore;



@interface _TtC9AACClient18AECNoOpPolicyStore : SwiftObject <AEPolicyStore>





-(BOOL)removeAllScratchpadsWithError:(*id)arg0 ;
-(id)readOnlyScratchpadForIdentifier:(id)arg0 ;
-(id)writeOnlyScratchpadForIdentifier:(id)arg0 ;


@end


#endif