typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct IDSSessionService {
    unk field0;
} IDSSessionService;

typedef struct object {
    id field0;
} object;

typedef struct queue {
    object field0;
} queue;

typedef struct Allocator {
} // Error Processing Struct Fields

typedef struct DynamicString {
    Allocator field0;
    char * field1;
    NSUInteger field2;
    NSUInteger field3;
} DynamicString;

typedef struct Config {
} // Error Processing Struct Fields

typedef struct IDSDiscoveryIdentity {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::IDSDiscoveryIdentity> {
    IDSDiscoveryIdentity field0;
} SharedPtr<re::IDSDiscoveryIdentity>;

typedef struct IDSDiscoveryView {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::IDSDiscoveryView> {
    IDSDiscoveryView field0;
} SharedPtr<re::IDSDiscoveryView>;

typedef struct DiscoveryInvite {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::DiscoveryInvite> {
    DiscoveryInvite field0;
} SharedPtr<re::DiscoveryInvite>;

typedef struct Slice<re::DynamicString> {
} // Error Processing Struct Fields

typedef struct DiscoveryView {
} // Error Processing Struct Fields

typedef struct SharedPtr<re::DiscoveryView> {
    DiscoveryView field0;
} SharedPtr<re::DiscoveryView>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription, true>> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy, true>> {
} // Error Processing Struct Fields

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> {
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> m_subscriptions;
    DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription, true>> m_deferred;
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> m_subscriptionsLegacy;
    DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy, true>> m_deferredLegacy;
    int m_raiseLevel;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription, true>> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy, true>> {
} // Error Processing Struct Fields

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> {
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> m_subscriptions;
    DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription, true>> m_deferred;
    DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> m_subscriptionsLegacy;
    DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy, true>> m_deferredLegacy;
    int m_raiseLevel;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>;

typedef struct DynamicArray<re::IDSInvite *> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::IDSDiscoveryView *> {
} // Error Processing Struct Fields

typedef struct Address {
    DynamicString field0;
} Address;

typedef struct DynamicArray<unsigned char> {
} // Error Processing Struct Fields

typedef struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle>> {
} // Error Processing Struct Fields

